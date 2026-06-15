// fichero 40741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40741;

Registro40741 crear_registro40741(int id) {
    Registro40741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
