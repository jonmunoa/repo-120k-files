// fichero 12465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12465;

Registro12465 crear_registro12465(int id) {
    Registro12465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
