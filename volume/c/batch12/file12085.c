// fichero 12085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12085;

Registro12085 crear_registro12085(int id) {
    Registro12085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
