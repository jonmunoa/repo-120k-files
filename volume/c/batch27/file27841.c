// fichero 27841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27841;

Registro27841 crear_registro27841(int id) {
    Registro27841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
