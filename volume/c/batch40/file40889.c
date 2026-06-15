// fichero 40889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40889;

Registro40889 crear_registro40889(int id) {
    Registro40889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
