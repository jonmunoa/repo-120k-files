// fichero 40469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40469;

Registro40469 crear_registro40469(int id) {
    Registro40469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
