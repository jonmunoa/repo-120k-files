// fichero 40381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40381;

Registro40381 crear_registro40381(int id) {
    Registro40381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
