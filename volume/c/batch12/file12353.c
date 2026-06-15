// fichero 12353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12353;

Registro12353 crear_registro12353(int id) {
    Registro12353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
