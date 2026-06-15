// fichero 8101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8101;

Registro8101 crear_registro8101(int id) {
    Registro8101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
