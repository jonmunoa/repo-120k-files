// fichero 11869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11869;

Registro11869 crear_registro11869(int id) {
    Registro11869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
