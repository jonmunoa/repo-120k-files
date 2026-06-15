// fichero 8841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8841;

Registro8841 crear_registro8841(int id) {
    Registro8841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
