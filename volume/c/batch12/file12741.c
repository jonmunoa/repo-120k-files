// fichero 12741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12741;

Registro12741 crear_registro12741(int id) {
    Registro12741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
