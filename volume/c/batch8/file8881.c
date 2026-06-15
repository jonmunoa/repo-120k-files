// fichero 8881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8881;

Registro8881 crear_registro8881(int id) {
    Registro8881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
