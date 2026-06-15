// fichero 40237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40237;

Registro40237 crear_registro40237(int id) {
    Registro40237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
