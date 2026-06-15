// fichero 7645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7645;

Registro7645 crear_registro7645(int id) {
    Registro7645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
