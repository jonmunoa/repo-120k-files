// fichero 12969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12969;

Registro12969 crear_registro12969(int id) {
    Registro12969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
