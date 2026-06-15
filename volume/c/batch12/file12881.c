// fichero 12881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12881;

Registro12881 crear_registro12881(int id) {
    Registro12881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
