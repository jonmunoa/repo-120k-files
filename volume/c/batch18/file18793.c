// fichero 18793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18793;

Registro18793 crear_registro18793(int id) {
    Registro18793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
