// fichero 12577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12577;

Registro12577 crear_registro12577(int id) {
    Registro12577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
