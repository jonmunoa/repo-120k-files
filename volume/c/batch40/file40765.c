// fichero 40765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40765;

Registro40765 crear_registro40765(int id) {
    Registro40765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
