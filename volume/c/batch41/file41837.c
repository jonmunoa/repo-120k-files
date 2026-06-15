// fichero 41837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41837;

Registro41837 crear_registro41837(int id) {
    Registro41837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
