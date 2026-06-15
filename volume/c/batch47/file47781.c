// fichero 47781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47781;

Registro47781 crear_registro47781(int id) {
    Registro47781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
