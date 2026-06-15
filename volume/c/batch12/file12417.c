// fichero 12417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12417;

Registro12417 crear_registro12417(int id) {
    Registro12417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
