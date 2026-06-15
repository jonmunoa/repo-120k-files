// fichero 40713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40713;

Registro40713 crear_registro40713(int id) {
    Registro40713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
