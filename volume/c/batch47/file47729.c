// fichero 47729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47729;

Registro47729 crear_registro47729(int id) {
    Registro47729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
