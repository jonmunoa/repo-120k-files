// fichero 46793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46793;

Registro46793 crear_registro46793(int id) {
    Registro46793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
