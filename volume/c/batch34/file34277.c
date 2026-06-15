// fichero 34277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34277;

Registro34277 crear_registro34277(int id) {
    Registro34277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
