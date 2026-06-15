// fichero 12445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12445;

Registro12445 crear_registro12445(int id) {
    Registro12445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
