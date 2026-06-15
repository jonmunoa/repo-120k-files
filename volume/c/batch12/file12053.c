// fichero 12053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12053;

Registro12053 crear_registro12053(int id) {
    Registro12053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
