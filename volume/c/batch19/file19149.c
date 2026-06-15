// fichero 19149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19149;

Registro19149 crear_registro19149(int id) {
    Registro19149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
