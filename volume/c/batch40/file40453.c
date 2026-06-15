// fichero 40453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40453;

Registro40453 crear_registro40453(int id) {
    Registro40453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
