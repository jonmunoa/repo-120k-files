// fichero 12365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12365;

Registro12365 crear_registro12365(int id) {
    Registro12365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
