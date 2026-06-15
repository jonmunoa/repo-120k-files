// fichero 11333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11333;

Registro11333 crear_registro11333(int id) {
    Registro11333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
