// fichero 8697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8697;

Registro8697 crear_registro8697(int id) {
    Registro8697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
