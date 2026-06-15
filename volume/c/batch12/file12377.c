// fichero 12377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12377;

Registro12377 crear_registro12377(int id) {
    Registro12377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
