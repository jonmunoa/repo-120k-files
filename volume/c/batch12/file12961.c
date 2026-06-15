// fichero 12961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12961;

Registro12961 crear_registro12961(int id) {
    Registro12961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
