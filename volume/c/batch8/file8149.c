// fichero 8149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8149;

Registro8149 crear_registro8149(int id) {
    Registro8149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
