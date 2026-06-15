// fichero 12197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12197;

Registro12197 crear_registro12197(int id) {
    Registro12197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
