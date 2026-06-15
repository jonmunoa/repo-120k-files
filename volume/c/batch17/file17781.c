// fichero 17781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17781;

Registro17781 crear_registro17781(int id) {
    Registro17781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
