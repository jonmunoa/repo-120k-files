// fichero 35669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35669;

Registro35669 crear_registro35669(int id) {
    Registro35669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
