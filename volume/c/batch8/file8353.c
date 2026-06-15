// fichero 8353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8353;

Registro8353 crear_registro8353(int id) {
    Registro8353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
