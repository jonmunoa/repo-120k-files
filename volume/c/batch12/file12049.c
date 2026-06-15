// fichero 12049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12049;

Registro12049 crear_registro12049(int id) {
    Registro12049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
