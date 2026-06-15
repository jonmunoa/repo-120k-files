// fichero 12529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12529;

Registro12529 crear_registro12529(int id) {
    Registro12529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
