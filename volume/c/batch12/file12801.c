// fichero 12801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12801;

Registro12801 crear_registro12801(int id) {
    Registro12801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
