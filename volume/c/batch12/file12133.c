// fichero 12133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12133;

Registro12133 crear_registro12133(int id) {
    Registro12133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
