// fichero 6793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6793;

Registro6793 crear_registro6793(int id) {
    Registro6793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
