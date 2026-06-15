// fichero 40165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40165;

Registro40165 crear_registro40165(int id) {
    Registro40165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
