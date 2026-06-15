// fichero 7793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7793;

Registro7793 crear_registro7793(int id) {
    Registro7793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
