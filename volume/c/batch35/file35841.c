// fichero 35841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35841;

Registro35841 crear_registro35841(int id) {
    Registro35841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
