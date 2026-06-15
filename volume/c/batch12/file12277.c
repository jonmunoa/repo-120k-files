// fichero 12277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12277;

Registro12277 crear_registro12277(int id) {
    Registro12277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
