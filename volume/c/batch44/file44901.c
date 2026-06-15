// fichero 44901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44901;

Registro44901 crear_registro44901(int id) {
    Registro44901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
