// fichero 12565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12565;

Registro12565 crear_registro12565(int id) {
    Registro12565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
