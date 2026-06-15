// fichero 40641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40641;

Registro40641 crear_registro40641(int id) {
    Registro40641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
