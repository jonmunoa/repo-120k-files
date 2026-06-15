// fichero 35529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35529;

Registro35529 crear_registro35529(int id) {
    Registro35529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
