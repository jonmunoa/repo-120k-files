// fichero 35117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35117;

Registro35117 crear_registro35117(int id) {
    Registro35117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
