// fichero 30489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30489;

Registro30489 crear_registro30489(int id) {
    Registro30489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
