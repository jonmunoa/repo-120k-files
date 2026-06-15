// fichero 19901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19901;

Registro19901 crear_registro19901(int id) {
    Registro19901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
